//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <SpringBoardUIServices/SBSUIStarkNotificationsSceneSettings-Protocol.h>

@class BSServiceConnectionEndpoint;

@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property(readonly, nonatomic) NSUInteger suspensionReasons;
@property(readonly, nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property(readonly, nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;

@end

