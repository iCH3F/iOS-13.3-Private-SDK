//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder
{
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

@end

