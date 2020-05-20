//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutRun-Protocol.h>

@class NSAttributedString, _UIVectorTextLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun>
{
    NSUInteger _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
    NSUInteger _lineIndex;
    struct __CTRun _runRef;
    double _baseline;
    CGRect _lineRect;
    CGRect _usedLineRect;
    CGRect _usedRunRect;
}

@property(nonatomic) CGRect usedRunRect; // @synthesize usedRunRect=_usedRunRect;
@property(nonatomic) CGRect usedLineRect; // @synthesize usedLineRect=_usedLineRect;
@property(nonatomic) CGRect lineRect; // @synthesize lineRect=_lineRect;
@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(readonly, nonatomic) struct __CTRun _CTRun; // @synthesize _CTRun=_runRef;
@property(readonly, nonatomic) NSUInteger lineIndex; // @synthesize lineIndex=_lineIndex;
// - (void).cxx_destruct;
- (void)_enumerateGlyphsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateGlyphsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)renderInContext:(CGContext )arg1;
- (BOOL)shouldRender;
- (id)font;
- (id)string;
- (_NSRange)stringRange;
- (long long)glyphCount;
- (void)dealloc;
- (id)initWithCTRun:(struct __CTRun )arg1 lineIndex:(NSUInteger)arg2 layoutInfo:(id)arg3;

@end

