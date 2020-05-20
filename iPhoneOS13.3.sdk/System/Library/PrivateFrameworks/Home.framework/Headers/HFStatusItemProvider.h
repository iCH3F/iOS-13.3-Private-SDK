//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider
{
    HMHome *_home;
    HMRoom *_room;
}

+ (id)_statusItemClasses;
+ (BOOL)hasStatusItemForServiceType:(id)arg1;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

