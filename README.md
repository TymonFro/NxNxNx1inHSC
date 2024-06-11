To solve NxNxNx1 in HSC:

download scrambler app, run it in folder you want a scramble to be generated, In HSC load scramble.hsc file 

Go to HSC and change this:

Projection:

View -> Geometry -> Face spacing - 0.05
	Projection -> 4D FOV - 1

Keybinds:

Puzzle keybinds -> 

//create 5 sets: NxNxNx1, ^rl, ^ud, ^fb, ^io

NxNxNx1 -> //optionally check "include -> ^Layers/^Filters"

---
- sc: ShiftLeft
  command:
    grip:
      layers: 1..2
- sc: ShiftRight
  command:
    grip:
      layers: 1..2
- sc: AltLeft
  command:
    grip:
      layers: "2"
- sc: AltRight
  command:
    grip:
      layers: "2"
- sc: Space
  command:
    recenter: {}
- sc: Semicolon
  command:
    grip:
      layers: 1..2
- sc: BracketLeft
  command:
    filter:
      mode: show_exactly
      filter_name: Next
- sc: KeyF
  command:
    grip:
      axis: R
- sc: KeyF
  command:
    keybind_set:
      keybind_set_name: ^rl
- sc: KeyC
  command:
    grip:
      axis: D
- sc: KeyC
  command:
    keybind_set:
      keybind_set_name: ^ud
- sc: KeyS
  command:
    grip:
      axis: F
- sc: KeyS
  command:
    keybind_set:
      keybind_set_name: ^fb
- sc: KeyR
  command:
    grip:
      axis: B
- sc: KeyR
  command:
    keybind_set:
      keybind_set_name: ^fb
- sc: KeyW
  command:
    grip:
      axis: L
- sc: KeyW
  command:
    keybind_set:
      keybind_set_name: ^rl
- sc: KeyE
  command:
    grip:
      axis: U
- sc: KeyE
  command:
    keybind_set:
      keybind_set_name: ^ud
- sc: KeyD
  command:
    grip:
      axis: I
      layers: 1..-1
- sc: KeyD
  command:
    keybind_set:
      keybind_set_name: ^io
- sc: KeyG
  command:
    grip:
      axis: R
      layers: "2"
- sc: KeyG
  command:
    keybind_set:
      keybind_set_name: ^rl
- sc: KeyV
  command:
    grip:
      axis: R
      layers: 1..2
- sc: KeyV
  command:
    keybind_set:
      keybind_set_name: ^rl
- sc: KeyX
  command:
    grip:
      axis: F
      layers: "2"
- sc: KeyX
  command:
    keybind_set:
      keybind_set_name: ^fb
- sc: KeyZ
  command:
    grip:
      axis: D
      layers: 1..2
- sc: KeyZ
  command:
    keybind_set:
      keybind_set_name: ^ud
- sc: KeyA
  command:
    grip:
      axis: F
      layers: 1..2
- sc: KeyA
  command:
    keybind_set:
      keybind_set_name: ^fb
- sc: KeyQ
  command:
    grip:
      axis: L
      layers: 1..2
- sc: KeyQ
  command:
    keybind_set:
      keybind_set_name: ^rl
- sc: KeyT
  command:
    grip:
      axis: B
      layers: 1..2
- sc: KeyT
  command:
    keybind_set:
      keybind_set_name: ^fb

^rl -> //check "include -> NxNxNx1"

---
- sc: KeyI
  command:
    twist:
      direction: x
      layers: "1"
- sc: KeyK
  command:
    twist:
      direction: "x'"
      layers: "1"
- sc: KeyJ
  command:
    twist:
      direction: y2
      layers: "1"
- sc: KeyL
  command:
    twist:
      direction: "y2'"
      layers: "1"
- sc: KeyU
  command:
    twist:
      direction: "z2'"
      layers: "1"
- sc: KeyO
  command:
    twist:
      direction: z2
      layers: "1"

^ud -> //check "include -> NxNxNx1"

---
- sc: KeyI
  command:
    twist:
      direction: x2
      layers: "1"
- sc: KeyK
  command:
    twist:
      direction: "x2'"
      layers: "1"
- sc: KeyJ
  command:
    twist:
      direction: y
      layers: "1"
- sc: KeyL
  command:
    twist:
      direction: "y'"
      layers: "1"
- sc: KeyU
  command:
    twist:
      direction: "z2'"
      layers: "1"
- sc: KeyO
  command:
    twist:
      direction: z2
      layers: "1"

^fb -> //check "include -> NxNxNx1"

---
- sc: KeyI
  command:
    twist:
      direction: x2
      layers: "1"
- sc: KeyK
  command:
    twist:
      direction: "x2'"
      layers: "1"
- sc: KeyJ
  command:
    twist:
      direction: y2
      layers: "1"
- sc: KeyL
  command:
    twist:
      direction: "y2'"
      layers: "1"
- sc: KeyU
  command:
    twist:
      direction: "z'"
      layers: "1"
- sc: KeyO
  command:
    twist:
      direction: z
      layers: "1"

^io -> //check "include -> NxNxNx1"

---
- sc: KeyI
  command:
    twist:
      direction: x
      layers: "1"
- sc: KeyK
  command:
    twist:
      direction: "x'"
      layers: "1"
- sc: KeyJ
  command:
    twist:
      direction: y
      layers: "1"
- sc: KeyL
  command:
    twist:
      direction: "y'"
      layers: "1"
- sc: KeyU
  command:
    twist:
      direction: "z'"
      layers: "1"
- sc: KeyO
  command:
    twist:
      direction: z
      layers: "1"


Happy hypercubing!

