//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray;

@interface PXAlignmentLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *_children;
    long long _xAlignment;
    long long _yAlignment;
}

+ (CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) long long yAlignment; // @synthesize yAlignment=_yAlignment;
@property(nonatomic) long long xAlignment; // @synthesize xAlignment=_xAlignment;
@property(readonly, nonatomic) NSArray *children;
// - (void).cxx_destruct;
- (void)preprareForReuse;
- (CGSize)performLayout;

@end

