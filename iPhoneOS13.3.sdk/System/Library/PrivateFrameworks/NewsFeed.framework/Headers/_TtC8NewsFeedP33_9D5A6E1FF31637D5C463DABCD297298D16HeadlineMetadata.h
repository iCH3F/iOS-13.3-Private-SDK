//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeed/FCHeadlineMetadata-Protocol.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtC8NewsFeedP33_9D5A6E1FF31637D5C463DABCD297298D16HeadlineMetadata : NSObject <FCHeadlineMetadata>
{
    MISSING_TYPE *title;
    MISSING_TYPE *displayDate;
    MISSING_TYPE *storyType;
    MISSING_TYPE *shortExcerpt;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *shortExcerpt;
@property(nonatomic, readonly) NSString *storyType;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) NSString *title;

@end

