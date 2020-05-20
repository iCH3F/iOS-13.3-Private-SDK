//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject
{
    NSMutableArray *_misgroupedTracks;
    long long _albumPID;
    long long _albumArtistPID;
}

@property(readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property(readonly, nonatomic) long long albumPID; // @synthesize albumPID=_albumPID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *misgroupedTracks;
- (void)addMisgroupedTrack:(id)arg1;
- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;

@end

