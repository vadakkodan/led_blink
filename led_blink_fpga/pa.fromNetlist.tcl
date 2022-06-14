
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name led_blink -dir "/mnt/Documents/Projects/verilog/led_blink/planAhead_run_1" -part xc3s200tq144-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/mnt/Documents/Projects/verilog/led_blink/led_blink.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/mnt/Documents/Projects/verilog/led_blink} }
set_property target_constrs_file "led_blink.ucf" [current_fileset -constrset]
add_files [list {led_blink.ucf}] -fileset [get_property constrset [current_run]]
link_design
