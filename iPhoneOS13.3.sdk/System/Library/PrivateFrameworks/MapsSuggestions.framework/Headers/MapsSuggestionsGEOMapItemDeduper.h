//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>
{
    long long _type;
    NSString _name;
}

+ (BOOL)isEnabled;
// - (void).cxx_destruct;
- (BOOL)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initWithSacrificedType:(long long)arg1;

@end

