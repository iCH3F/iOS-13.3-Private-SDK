//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal
{
    long long _automatchPosition;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long automatchPosition; // @synthesize automatchPosition=_automatchPosition;
- (BOOL)isAutomatchPlayer;
- (id)alias;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (id)playerID;

@end

