//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString;

@interface SBFGradient : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding>
{
    NSArray *_colors;
    NSArray *_locations;
    NSString *_type;
    CGPoint _startPoint;
    CGPoint _endPoint;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (CGGradient )copyCGGradient;
- (void)configureLayer:(id)arg1;
- (id)cgColors;
- (id)init;

@end
