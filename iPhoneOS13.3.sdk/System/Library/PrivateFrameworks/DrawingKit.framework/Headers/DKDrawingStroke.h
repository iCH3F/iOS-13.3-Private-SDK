//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface DKDrawingStroke : NSObject <NSCopying>
{
    NSMutableArray *_strokePoints;
}

+ (id)drawingStrokeWithData:(id)arg1 count:(NSUInteger)arg2;
@property(readonly) NSMutableArray *strokePoints; // @synthesize strokePoints=_strokePoints;
// - (void).cxx_destruct;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2;
- (id)_encodePointsDrawingPointData:(id)arg1;
- (id)encodedBrushStroke;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

