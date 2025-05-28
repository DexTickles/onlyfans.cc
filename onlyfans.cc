getgenv()["onlyfans.cc"] = {
    ['Core'] = {
        ['Version'] = 'v2.3',
    },

    ['Bullet Redirection'] = {
        ['Enabled'] = true,
        ['Anti AimViewer'] = true,
        ['Target Keybind'] = 'T',
        ['Mode'] = 'Silent',
        ['Range'] = 254,
        ['Checks'] = { 'Wall', 'Knocked', 'Grabbed', 'Vehicle' },

        ['Hit Location'] = {
            ['Type'] = 'Closest Part',
            ['Parts'] = {
                'Head', 'UpperTorso', 'HumanoidRootPart', 'LowerTorso',
                'LeftHand', 'RightHand', 'LeftLowerArm', 'RightLowerArm',
                'LeftUpperArm', 'RightUpperArm', 'LeftFoot', 'LeftLowerLeg',
                'LeftUpperLeg', 'RightLowerLeg', 'RightFoot', 'RightUpperLeg'
            }
        },

        ['Fov'] = {
            ['Enabled'] = true,
            ['Size'] = { ['X'] = 25, ['Y'] = 25, ['Z'] = 25 },
        },

        ['Prediction'] = {
            ['Sets'] = { ['X'] = 0, ['Y'] = 0, ['Z'] = 0 }
        },
    },

    ['Camlock'] = {
        ['Enabled'] = true,
        ['Keybind'] = 'Q',
        ['Range'] = 555,

        ['Checks'] = { 'Wall', 'Knocked', 'Grabbed', 'Vehicle' },

        ['Fov'] = {
            ['Enabled'] = true,
            ['Size'] = { ['X'] = 10, ['Y'] = 10, ['Z'] = 10 },
        },

        ['Mode'] = {
            ['ShiftLocked'] = true,
            ['ThirdPerson'] = false,
            ['FirstPerson'] = true,
        },

        ['Value'] = {
            ['Snappiness'] = 0.123,
            ['Sticky Aim'] = true,
        },

        ['Hit Location'] = {
            ['Type'] = 'Closest Part',
            ['Parts'] = {
                'Head', 'UpperTorso', 'HumanoidRootPart', 'LowerTorso',
                'LeftHand', 'RightHand', 'LeftLowerArm', 'RightLowerArm',
                'LeftUpperArm', 'RightUpperArm', 'LeftFoot', 'LeftLowerLeg',
                'LeftUpperLeg', 'RightLowerLeg', 'RightFoot', 'RightUpperLeg'
            }
        },

        ['Prediction'] = {
            ['X'] = 0.1225, ['Y'] = 0.1225, ['Z'] = 0.1225,
        },
    },

    ['Trigger Redirection'] = {
        ['Enabled'] = true,
        ['Mode'] = 'Trigger',
        ['Range'] = 254,

        ['Prediction'] = {
            ['X'] = 0.1225, ['Y'] = 0.1225, ['Z'] = 0.1225,
        },

        ['Weapons'] = {
            '[Double-Barrel SG]', '[Revolver]', '[TacticalShotgun]'
        },

        ['Keybind'] = {
            ['Bind'] = 'T',
            ['Keybind Mode'] = 'Toggle'
        },

        ['Delay'] = {
            ['Value'] = 0,
        },

        ['HitParts'] = {
            ['Type'] = false,
            ['Parts'] = {
                'Head', 'UpperTorso', 'HumanoidRootPart', 'LowerTorso',
                'LeftHand', 'RightHand', 'LeftLowerArm', 'RightLowerArm',
                'LeftUpperArm', 'RightUpperArm', 'LeftFoot', 'LeftLowerLeg',
                'LeftUpperLeg', 'RightLowerLeg', 'RightFoot', 'RightUpperLeg'
            }
        },

        ['Fov'] = {
            ['Enabled'] = true,
            ['Size'] = { ['X'] = 10, ['Y'] = 10, ['Z'] = 10 },
        },
    },

    ['Bullet Delay'] = {
        ['Enabled'] = true,
        ['Weapons'] = {
            ['Double-Barrel SG'] = 0,
            ['Revolver'] = 0,
            ['TacticalShotgun'] = 0,
        }
    },

    ['Macro'] = {
        ['Enabled'] = true,
        ['Bind'] = 'X',
        ['Percent'] = 0.15,
        ['Mode'] = 'Third'
    },

    ['Movement Modification'] = {
        ['Options'] = {
            ['Enabled'] = true,
            ['DefaultSpeed'] = 75,
            ['ToggleMode'] = true,
            ['Keybinds'] = {
                ['ToggleMovement'] = 'V',
                ['Speed +5'] = 'M',
                ['Speed -5'] = 'N',
            }
        }
    },

    ['Bullet Modification'] = {
        ['Options'] = {
            ['Enabled'] = true,
            ['Multiplier'] = 0.01,
            ['ToggleMode'] = true,
            ['Keybinds'] = {
                ['ToggleSpread'] = 'G',
                ['Spread +0.1'] = 'J',
                ['Spread -0.1'] = 'K',
            },
        }
    },
}
