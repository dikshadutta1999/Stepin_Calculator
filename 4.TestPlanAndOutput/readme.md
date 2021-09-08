# TEST PLAN

## High level test plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Reverse String | Choice | SUCCESS | SUCCESS |
|  H_02       | EMI | Choice | SUCCESS | SUCCESS |
|  H_03       | Arthmetical Operations | Choice| SUCCESS | SUCCESS |
|  H_04       | Trignometric Operations | Choice| SUCCESS | SUCCESS |

## Low level test plan

| **Test ID** | **HL_ID** | **Description**   | **Exp Input** | **Exp Output** | **Actual Output** |**Type Of Test**  |    
|-------------|-----------|---------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_03 | Performing Division | (10,10) | 1 | 1 | Requirement based |
|  L_02       | H_03 | Performing Multiplication | (10,10) | 100 | 100 | Requirement based |
|  L_03       | H_03 | Performing Addition | (10,10) | 20 | 20 | Requirement based |
|  L_04       | H_03 | Performing Addition | (10,0) | 10 | 10 | Requirement based |
|  L_05       | H_03 | Performing Subtraction | (10,10) | 0 | 0 | Requirement based |
|  L_06       | H_03 | Performing Subtraction | (10,0) | 10 | 10 | Requirement based |


