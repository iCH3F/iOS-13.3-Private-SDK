//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLPointJSExports-Protocol.h>

@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying>
{
    CGPoint _point;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) CGPoint point; // @synthesize point=_point;
- (id)description;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
- (id)CGPointValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPoint:(CGPoint)arg1;

@end

