//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSliderValueTableViewCellDelegate-Protocol.h>
#import <HomeUI/HUStepperCellDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class NSMapTable, NSMutableSet;
@protocol HUAccessorySettingsItemModuleControllerDelegate;

@interface HUAccessorySettingsItemModuleController : HUItemTableModuleController <HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, HUStepperCellDelegate>
{
    id <HUAccessorySettingsItemModuleControllerDelegate> _delegate;
    NSMapTable *_cellToItemMap;
    NSMutableSet *_registeredButtonFutures;
}

@property(retain) NSMutableSet *registeredButtonFutures; // @synthesize registeredButtonFutures=_registeredButtonFutures;
@property(retain) NSMapTable *cellToItemMap; // @synthesize cellToItemMap=_cellToItemMap;
@property(nonatomic) __weak id <HUAccessorySettingsItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_setupCellAccessoryType:(id)arg1 forItem:(id)arg2 withKey:(id)arg3;
- (void)_registerButtonActionHandler:(id)arg1 item:(id)arg2;
- (void)_handleButtonPress:(id)arg1;
- (void)_setupSliderCell:(id)arg1 forMinKey:(id)arg2 maxKey:(id)arg3;
- (void)stepperCell:(id)arg1 steppedToValue:(id)arg2;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (void)_updateSwitchSettingItem:(id)arg1 withValue:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)_selectOptionItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;

@end
