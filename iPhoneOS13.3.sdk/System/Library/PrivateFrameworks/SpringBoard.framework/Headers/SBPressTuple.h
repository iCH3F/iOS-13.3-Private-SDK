//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBPressTuple : NSObject <BSDescriptionProviding>
{
    double _durationDown;
    double _durationUp;
}

@property(nonatomic) double durationUp; // @synthesize durationUp=_durationUp;
@property(nonatomic) double durationDown; // @synthesize durationDown=_durationDown;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDurationDown:(double)arg1 durationUp:(double)arg2;

@end

