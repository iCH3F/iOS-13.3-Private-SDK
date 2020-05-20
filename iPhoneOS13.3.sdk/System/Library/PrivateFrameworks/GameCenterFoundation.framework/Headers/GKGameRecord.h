//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGame.h>

@class GKPlayer;

@interface GKGameRecord : GKGame
{
    GKPlayer *_player;
}

+ (void)loadGameRecordsForPlayer:(id)arg1 bundleIDs:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)invalidateCaches;
+ (id)internalRepresentationCache;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 bundleIdentifier:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)partitionGameRecords:(id)arg1 returniOS:(id )arg2 returnMac:(id )arg3;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
@property(readonly, nonatomic) BOOL played;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2;

@end

