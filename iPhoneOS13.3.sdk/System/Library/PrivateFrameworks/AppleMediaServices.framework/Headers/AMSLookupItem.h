//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_itemDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) float userRatingForCurrentVersion;
@property(readonly, nonatomic) float userRating;
@property(readonly, copy, nonatomic) NSURL *productPageURL;
@property(readonly, copy, nonatomic) NSArray *offers;
@property(readonly, copy, nonatomic) NSString *offerName;
@property(readonly, nonatomic) long long numberOfUserRatingsForCurrentVersion;
@property(readonly, nonatomic) long long numberOfUserRatings;
@property(readonly, copy, nonatomic) NSNumber *iTunesStoreIdentifier;
@property(readonly, copy, nonatomic) NSString *itemKind;
@property(readonly, nonatomic, getter=isPOIBased) BOOL POIBased;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSArray *categoryNames;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *artwork;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)initWithLookupDictionary:(id)arg1;

@end

