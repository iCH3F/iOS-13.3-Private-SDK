//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject
{
    NSDictionary *_artworkDictionary;
}

@property(readonly, nonatomic) NSDictionary *artworkDictionary; // @synthesize artworkDictionary=_artworkDictionary;
// - (void).cxx_destruct;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;
@property(readonly, nonatomic) NSString *URLString;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (id)colorWithKind:(id)arg1;
- (id)initWithArtworkDictionary:(id)arg1;

@end

