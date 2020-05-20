//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet
{
    PKImage *_placeHolderImage;
    CGRect _logoRect;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
@property(nonatomic) CGRect logoRect; // @synthesize logoRect=_logoRect;
@property(retain, nonatomic) PKImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)_initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 frontFaceImageSet:(id)arg5;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

