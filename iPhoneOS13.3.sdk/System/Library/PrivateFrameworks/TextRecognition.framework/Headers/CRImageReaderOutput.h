//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface CRImageReaderOutput : NSObject <NSCopying, NSSecureCoding>
{
    int _confidence;
    float _baselineAngle;
    NSString *_type;
    NSString *_stringValue;
    NSArray *_candidates;
    NSArray *_components;
    CGPoint _topLeft;
    CGPoint _topRight;
    CGPoint _bottomRight;
    CGPoint _bottomLeft;
    CGRect _boundingBox;
}

+ (BOOL)supportsSecureCoding;
+ (int)confidenceLevelForConfidenceScore:(double)arg1 options:(id)arg2;
+ (id)outputWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3;
@property float baselineAngle; // @synthesize baselineAngle=_baselineAngle;
@property(readonly) NSArray *components; // @synthesize components=_components;
@property(readonly) NSArray *candidates; // @synthesize candidates=_candidates;
@property(readonly) CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly) CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly) CGPoint topRight; // @synthesize topRight=_topRight;
@property(readonly) CGPoint topLeft; // @synthesize topLeft=_topLeft;
@property(readonly) CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property int confidence; // @synthesize confidence=_confidence;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (CGPoint)_rotatePointIfNeccessary:(CGPoint)arg1 anchor:(CGPoint)arg2 angle:(double)arg3;
- (id)cornersForCharacterRange:(_NSRange)arg1 error:(id )arg2;
- (id)initWithType:(id)arg1 textFeature:(id)arg2 withCandidates:(BOOL)arg3 options:(id)arg4;
- (id)initWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3;

@end
