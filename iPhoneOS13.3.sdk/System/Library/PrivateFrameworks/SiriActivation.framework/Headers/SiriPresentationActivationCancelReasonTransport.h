//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber;

@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_transport;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *transport; // @synthesize transport=_transport;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)cancelReason;
- (id)description;
- (id)initWithSiriPresentationActivationCancelReason:(NSUInteger)arg1;

@end

