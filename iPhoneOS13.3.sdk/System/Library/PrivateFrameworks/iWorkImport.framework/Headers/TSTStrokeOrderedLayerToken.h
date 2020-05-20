//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTStrokeLayerStrokeAndRange-Protocol.h>

@class TSDStroke;
@protocol TSTStrokeLayerStrokeAndRange;

__attribute__((visibility("hidden")))
@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>
{
    int _order;
    TSDStroke *_stroke;
    id <TSTStrokeLayerStrokeAndRange> _majorStrokeLayerToken;
    id <TSTStrokeLayerStrokeAndRange> _minorStrokeLayerToken;
    struct TSTSimpleRange _range;
}

+ (id)tokenWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;
@property(retain, nonatomic) id <TSTStrokeLayerStrokeAndRange> minorStrokeLayerToken; // @synthesize minorStrokeLayerToken=_minorStrokeLayerToken;
@property(retain, nonatomic) id <TSTStrokeLayerStrokeAndRange> majorStrokeLayerToken; // @synthesize majorStrokeLayerToken=_majorStrokeLayerToken;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
// - (void).cxx_destruct;
- (id)initWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;

@end

