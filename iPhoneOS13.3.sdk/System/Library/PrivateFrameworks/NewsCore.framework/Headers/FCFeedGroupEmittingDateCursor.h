//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate;

@interface FCFeedGroupEmittingDateCursor : FCFeedGroupEmittingCursor
{
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;

@end
