//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSNumber;

@interface FCFeedGroupEmittingNumberCursor : FCFeedGroupEmittingCursor
{
    NSNumber *_number;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *number; // @synthesize number=_number;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

