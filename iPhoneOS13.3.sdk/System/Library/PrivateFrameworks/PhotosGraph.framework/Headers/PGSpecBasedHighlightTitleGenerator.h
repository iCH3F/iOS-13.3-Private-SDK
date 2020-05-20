//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;
@protocol PGEventEnrichment;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator
{
    BOOL _createVerboseTitle;
    id <PGEventEnrichment> _collection;
    NSString *_meaningLabel;
}

@property(readonly, nonatomic) BOOL createVerboseTitle; // @synthesize createVerboseTitle=_createVerboseTitle;
@property(readonly, nonatomic) NSString *meaningLabel; // @synthesize meaningLabel=_meaningLabel;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
// - (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(BOOL)arg3;

@end
