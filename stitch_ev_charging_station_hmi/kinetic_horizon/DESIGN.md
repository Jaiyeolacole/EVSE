---
name: Kinetic Horizon
colors:
  surface: '#10131a'
  surface-dim: '#10131a'
  surface-bright: '#363940'
  surface-container-lowest: '#0b0e15'
  surface-container-low: '#191c22'
  surface-container: '#1d2026'
  surface-container-high: '#272a31'
  surface-container-highest: '#32353c'
  on-surface: '#e0e2eb'
  on-surface-variant: '#c1c6d5'
  inverse-surface: '#e0e2eb'
  inverse-on-surface: '#2d3037'
  outline: '#8b919f'
  outline-variant: '#414753'
  surface-tint: '#abc7ff'
  primary: '#abc7ff'
  on-primary: '#002f65'
  primary-container: '#448ffd'
  on-primary-container: '#002959'
  inverse-primary: '#005cba'
  secondary: '#61de8a'
  on-secondary: '#00391a'
  secondary-container: '#18a659'
  on-secondary-container: '#003115'
  tertiary: '#ffb688'
  on-tertiary: '#512400'
  tertiary-container: '#e07316'
  on-tertiary-container: '#471f00'
  error: '#ffb4ab'
  on-error: '#690005'
  error-container: '#93000a'
  on-error-container: '#ffdad6'
  primary-fixed: '#d7e3ff'
  primary-fixed-dim: '#abc7ff'
  on-primary-fixed: '#001b3f'
  on-primary-fixed-variant: '#00458e'
  secondary-fixed: '#7efba4'
  secondary-fixed-dim: '#61de8a'
  on-secondary-fixed: '#00210c'
  on-secondary-fixed-variant: '#005228'
  tertiary-fixed: '#ffdbc7'
  tertiary-fixed-dim: '#ffb688'
  on-tertiary-fixed: '#311300'
  on-tertiary-fixed-variant: '#733600'
  background: '#10131a'
  on-background: '#e0e2eb'
  surface-variant: '#32353c'
typography:
  display-speed:
    fontFamily: Montserrat
    fontSize: 48px
    fontWeight: '700'
    lineHeight: 48px
    letterSpacing: -1px
  headline-md:
    fontFamily: Montserrat
    fontSize: 18px
    fontWeight: '600'
    lineHeight: 24px
  body-lg:
    fontFamily: Montserrat
    fontSize: 14px
    fontWeight: '500'
    lineHeight: 20px
  body-sm:
    fontFamily: Montserrat
    fontSize: 12px
    fontWeight: '400'
    lineHeight: 16px
  label-caps:
    fontFamily: Montserrat
    fontSize: 10px
    fontWeight: '700'
    lineHeight: 12px
    letterSpacing: 1px
rounded:
  sm: 0.25rem
  DEFAULT: 0.5rem
  md: 0.75rem
  lg: 1rem
  xl: 1.5rem
  full: 9999px
spacing:
  grid_unit: 8px
  header_height: 30px
  main_height: 190px
  footer_height: 20px
  margin_edge: 12px
  gutter: 8px
---

## Brand & Style
The design system is engineered for high-performance automotive interfaces, specifically optimized for small-form-factor TFT displays. The brand personality is technical, reliable, and precision-oriented, mirroring the aesthetic of modern electric vehicle (EV) ecosystems.

The design style is **Corporate / Modern** with a focus on **Tonal Layering**. By utilizing a deep, near-black foundation with incrementally lighter card surfaces, the system establishes hierarchy without relying on heavy shadows which can appear "muddy" on low-resolution TFT panels. High-contrast geometric typography and vibrant state indicators ensure maximum legibility in high-glare automotive environments.

## Colors
The palette is built on a "Deep Sea" dark mode architecture to reduce driver eye strain and maximize the contrast of critical data. 

- **Primary & States:** These colors are reserved for functional status. Use `primary` (Idle) for standard interactions and the specific state colors to indicate the vehicle's powertrain or connection status.
- **Surfaces:** Use `#161B22` for standard UI containers and `#1E2630` for active or "pressed" states and elevated modals.
- **Typography:** Always use `#F5F7FA` for telemetry data (speed, percentage, range) to ensure it meets automotive safety legibility standards.

## Typography
Typography is the most critical element for a 320x240 display. This design system utilizes **Montserrat** for its geometric clarity.

- **Data Priority:** Use `display-speed` only for the primary vehicle metric (e.g., Speed or SoC %).
- **Caps for Labels:** Use `label-caps` for header categories or unit descriptors (e.g., "KM/H", "VOLTS") to differentiate them from dynamic values.
- **Rendering Note:** On small TFT screens, avoid font weights below 400 to prevent anti-aliasing artifacts that reduce readability.

## Layout & Spacing
The layout is strictly divided into three horizontal functional zones to ensure muscle memory for the driver.

1.  **Header (30px):** Reserved for system-level icons (Signal, Bluetooth, Time) and status breadcrumbs.
2.  **Main Content (190px):** The primary interaction area. Content should be grouped into cards.
3.  **Footer (20px):** Persistent secondary data or "Back/Home" navigation prompts.

Use the **8px grid** for all internal padding and alignment. Elements should rarely sit closer than 12px to the physical edge of the screen to account for bezel encroachment.

## Elevation & Depth
In an automotive HMI, shadows are avoided to maintain visual "crunchiness" and prevent the UI from looking washed out under direct sunlight.

Depth is communicated through **Tonal Layering** and **Subtle Outlines**:
- **Level 0 (Background):** `#0D1117`
- **Level 1 (Card):** `#161B22` with a 1px solid border of `#1E2630`.
- **Level 2 (Elevated/Active):** `#1E2630` with a 1px solid border of `#8B949E` (low opacity).

This "Border-Box" approach ensures that even when the screen brightness is lowered, the boundaries of touch targets or data clusters remain distinct.

## Shapes
The design system uses a consistent **8px (Standard)** to **12px (Large)** corner radius. 

- **Standard Cards:** 8px radius.
- **Buttons/Touch Targets:** 10px radius for better ergonomic feel.
- **Progress Bars:** Fully rounded (pill) ends to indicate fluid movement and status.

Avoid sharp 0px corners, as they feel "industrial" and contrast poorly with the organic curves of modern vehicle interiors.

## Components

### Buttons
Primary buttons should use the `primary_color_hex` background with `#F5F7FA` text. On a 320x240 screen, buttons must have a minimum height of 40px to be safely interactable while driving.

### Cards
Cards are the primary container. They should use `surface_low_hex` with an 8px radius. Use a horizontal 2-column split within the 190px main area to show "Metric Name" on the left and "Value" on the right.

### Progress & Charging Bars
Use a 12px height for progress bars. The background track should be `#1E2630`, with the fill using the appropriate `state` color (e.g., `#27AE60` for charging).

### Icons
Use simple, thick-stroke (2px) vector icons. Avoid fine details. Icons should be sized at 24x24px for the main content area and 16x16px for the header/footer.

### Status Badges
Small, pill-shaped indicators using `label-caps` typography. The badge background should be a 20% opacity version of the state color, with a 100% opacity text color for contrast.