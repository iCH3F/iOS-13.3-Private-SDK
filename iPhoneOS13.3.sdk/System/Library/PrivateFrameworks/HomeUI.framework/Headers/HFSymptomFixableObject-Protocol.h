//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFAccessoryVendor-Protocol.h>
#import <HomeUI/HFHomeKitObject-Protocol.h>
#import <HomeUI/HFSymptomsHandlerVendor-Protocol.h>

@class HMSymptomsHandler, NSSet, NSUUID;

@protocol HFSymptomFixableObject <NSObject, HFSymptomsHandlerVendor, HFAccessoryVendor, HFHomeKitObject>
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@end

