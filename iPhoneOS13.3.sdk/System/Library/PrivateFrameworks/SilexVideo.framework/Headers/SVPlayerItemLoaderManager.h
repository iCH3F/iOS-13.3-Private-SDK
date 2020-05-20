//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemLoaderProviding-Protocol.h>

@class SVWeakObjectCache;
@protocol SVPlayerItemLoaderFactory;

@interface SVPlayerItemLoaderManager : NSObject <SVPlayerItemLoaderProviding>
{
    id <SVPlayerItemLoaderFactory> _playerItemLoaderFactory;
    SVWeakObjectCache *_playerItemLoaders;
}

@property(readonly, nonatomic) SVWeakObjectCache *playerItemLoaders; // @synthesize playerItemLoaders=_playerItemLoaders;
@property(readonly, nonatomic) id <SVPlayerItemLoaderFactory> playerItemLoaderFactory; // @synthesize playerItemLoaderFactory=_playerItemLoaderFactory;
// - (void).cxx_destruct;
- (id)playerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemLoaderFactory:(id)arg1;

@end

