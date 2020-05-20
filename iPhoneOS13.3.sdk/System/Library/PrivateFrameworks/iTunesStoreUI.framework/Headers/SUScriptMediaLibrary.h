//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSString;

@interface SUScriptMediaLibrary : SUScriptObject
{
    NSMutableArray *_musicPlayers;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_launchMusicAppAfterPlayback:(id)arg1 firstItem:(id)arg2;
- (void)_launchMusicApp;
- (BOOL)_isRestricted;
- (void)_connectNativeObject;
@property(readonly) NSString *queryPresetVideoPodcasts;
@property(readonly) NSString *queryPresetTVShows;
@property(readonly) NSString *queryPresetSongs;
@property(readonly) NSString *queryPresetPodcasts;
@property(readonly) NSString *queryPresetPlaylists;
@property(readonly) NSString *queryPresetMusicVideos;
@property(readonly) NSString *queryPresetMovies;
@property(readonly) NSString *queryPresetGenres;
@property(readonly) NSString *queryPresetComposers;
@property(readonly) NSString *queryPresetCompilations;
@property(readonly) NSString *queryPresetAudiobooks;
@property(readonly) NSString *queryPresetArtists;
@property(readonly) NSString *queryPresetAlbums;
@property(readonly) NSString *playerTypeIPod;
@property(readonly) NSString *playerTypeApplication;
@property(readonly) NSString *mediaTypeVideoPodcast;
@property(readonly) NSString *mediaTypeTVShow;
@property(readonly) NSString *mediaTypePodcast;
@property(readonly) NSString *mediaTypeMusicVideo;
@property(readonly) NSString *mediaTypeMusic;
@property(readonly) NSString *mediaTypeMovie;
@property(readonly) NSString *mediaTypeAudiobook;
@property(readonly) NSString *mediaTypeAnyVideo;
@property(readonly) NSString *mediaTypeAnyAudio;
@property(readonly) NSString *mediaTypeAny;
@property(readonly) NSString *itemPropertyTrackNumber;
@property(readonly) NSString *itemPropertyTrackCount;
@property(readonly) NSString *itemPropertyTitle;
@property(readonly) NSString *itemPropertyStoreID;
@property(readonly) NSString *itemPropertySkipCount;
@property(readonly) NSString *itemPropertyRating;
@property(readonly) NSString *itemPropertyPodcastTitle;
@property(readonly) NSString *itemPropertyPlaybackDuration;
@property(readonly) NSString *itemPropertyPlayCount;
@property(readonly) NSString *itemPropertyPersistentID;
@property(readonly) NSString *itemPropertyMediaType;
@property(readonly) NSString *itemPropertyLyrics;
@property(readonly) NSString *itemPropertyLastPlayedDate;
@property(readonly) NSString *itemPropertyIsRental;
@property(readonly) NSString *itemPropertyIsHD;
@property(readonly) NSString *itemPropertyIsCompilation;
@property(readonly) NSString *itemPropertyGenre;
@property(readonly) NSString *itemPropertyDiscNumber;
@property(readonly) NSString *itemPropertyDiscCount;
@property(readonly) NSString *itemPropertyComposer;
@property(readonly) NSString *itemPropertyArtist;
@property(readonly) NSString *itemPropertyAlbumTitle;
@property(readonly) NSString *itemPropertyAlbumArtist;
- (id)_className;
- (id)playVideoWithAdamID:(id)arg1;
- (id)playSongsWithAdamIDs:(id)arg1;
- (id)playSongsInCollectionWithAdamID:(id)arg1 firstItemID:(id)arg2;
- (id)musicPlayerForType:(id)arg1;
- (id)makeQueryWithPreset:(id)arg1;
- (id)makePickerWithMediaTypes:(id)arg1;
- (id)makeCollectionWithItems:(id)arg1;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionFunction:(id)arg3;
- (id)containsAdamIDs:(id)arg1;
- (id)containsAdamID:(id)arg1;
- (void)dealloc;

@end

