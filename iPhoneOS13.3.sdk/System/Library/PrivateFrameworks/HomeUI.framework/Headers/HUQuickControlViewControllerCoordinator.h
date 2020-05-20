//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HFOverrideCharacteristicValueProvider-Protocol.h>
#import <HomeUI/HUQuickControlViewControllerDelegate-Protocol.h>

@class HFItem, HFOverrideCharacteristicValueSource, HFSimpleItemManager, HMHome, HUQuickControlContentCharacteristicWritingUpdateAdapter, HUQuickControlViewController, NSSet, NSString;
@protocol HFIconDescriptor, HUQuickControlContentHosting, HUQuickControlViewControllerCoordinatorDelegate, NSCopying;

@interface HUQuickControlViewControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate>
{
    BOOL _controlsVisible;
    BOOL _showIconOffState;
    BOOL _reachable;
    HMHome *_home;
    HFItem<NSCopying> *_item;
    id <HUQuickControlViewControllerCoordinatorDelegate> _delegate;
    id <HUQuickControlContentHosting> _controlHost;
    HUQuickControlViewController *_activeController;
    id <HFIconDescriptor> _iconDescriptor;
    NSString *_primaryStatusText;
    NSString *_secondaryStatusText;
    HFOverrideCharacteristicValueSource *_valueSource;
    HFSimpleItemManager *_itemManager;
    NSSet *_controlItems;
    HFItem *_reachabilityItem;
    HFSimpleItemManager *_reachabilityItemManager;
    HUQuickControlContentCharacteristicWritingUpdateAdapter *_characteristicWritingAdapter;
}

@property(readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter; // @synthesize characteristicWritingAdapter=_characteristicWritingAdapter;
@property(readonly, nonatomic) HFSimpleItemManager *reachabilityItemManager; // @synthesize reachabilityItemManager=_reachabilityItemManager;
@property(readonly, nonatomic) HFItem *reachabilityItem; // @synthesize reachabilityItem=_reachabilityItem;
@property(readonly, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(readonly, nonatomic) HFSimpleItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(readonly, nonatomic) HFOverrideCharacteristicValueSource *valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property(copy, nonatomic) NSString *secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property(copy, nonatomic) NSString *primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property(readonly, nonatomic) BOOL showIconOffState; // @synthesize showIconOffState=_showIconOffState;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic, getter=areControlsVisible) BOOL controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(retain, nonatomic) HUQuickControlViewController *activeController; // @synthesize activeController=_activeController;
@property(nonatomic) __weak id <HUQuickControlContentHosting> controlHost; // @synthesize controlHost=_controlHost;
@property(nonatomic) __weak id <HUQuickControlViewControllerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)quickControlViewControllerDidUpdateStatusOverrides:(id)arg1;
- (id)_controllerForControllableCharacteristic:(id)arg1;
- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;
- (BOOL)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)_updateReachabilityStateNotifiyingDelegate:(BOOL)arg1;
- (void)_updateStatusTextNotifyingDelegate:(BOOL)arg1;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(BOOL)arg2;
- (void)_updateIconDescriptorNotifyingDelegate:(BOOL)arg1;
- (id)_itemToUseForIconAndStatus;
- (void)_createControlViewControllersForControlItems:(id)arg1;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 delegate:(id)arg4;

@end

