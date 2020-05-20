//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAdResponse.h>

@class NSURL;
@protocol SXPrerollAdMetadata;

@interface SXPrerollAdResponse : SXAdResponse
{
    NSURL *_videoURL;
    double _skipDuration;
    id <SXPrerollAdMetadata> _prerollAdMetadata;
}

@property(retain, nonatomic) id <SXPrerollAdMetadata> prerollAdMetadata; // @synthesize prerollAdMetadata=_prerollAdMetadata;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
// - (void).cxx_destruct;

@end

