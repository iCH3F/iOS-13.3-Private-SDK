//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsEntry;

@protocol MapsSuggestionsDeduper <MapsSuggestionsObject>
+ (BOOL)isEnabled;
- (BOOL)dedupeByEnrichingEntry:(MapsSuggestionsEntry *)arg1 withEntry:(MapsSuggestionsEntry *)arg2;
@end

