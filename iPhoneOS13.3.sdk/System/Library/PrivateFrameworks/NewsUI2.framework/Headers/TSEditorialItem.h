//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, NSURL, UIImage;
@protocol FCHeadlineProviding, FCTagProviding;

@interface TSEditorialItem : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *title;
    MISSING_TYPE *subtitle;
    MISSING_TYPE *subtitleColor;
    MISSING_TYPE *attributes;
    MISSING_TYPE *actionURL;
    MISSING_TYPE *thumbnailImage;
    MISSING_TYPE *backingTag;
    MISSING_TYPE *headline;
}

// - (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 attributes:(id)arg5 actionURL:(id)arg6 thumbnailImage:(id)arg7 backingTag:(id)arg8 headline:(id)arg9;
@property(nonatomic, retain) id <FCHeadlineProviding> headline; // @synthesize headline;
@property(nonatomic, retain) id <FCTagProviding> backingTag; // @synthesize backingTag;
@property(nonatomic, retain) UIImage *thumbnailImage; // @synthesize thumbnailImage;
@property(nonatomic, copy) NSURL *actionURL;
@property(nonatomic, copy) NSArray *attributes;
@property(nonatomic, copy) NSString *subtitleColor;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *identifier;

@end

