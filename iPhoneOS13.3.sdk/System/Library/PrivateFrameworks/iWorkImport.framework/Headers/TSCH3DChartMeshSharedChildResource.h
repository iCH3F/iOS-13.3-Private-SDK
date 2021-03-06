//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DChartMeshResources;

__attribute__((visibility("hidden")))
@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartMeshResources *mParent;
    BOOL mChildRegenerated;
    int mCaching;
    struct DataBufferInfo mBufferInfo;
    NSUInteger mResourceIdentifier;
}

+ (id)resourceWithParent:(id)arg1;
@property(nonatomic) BOOL childRegenerated; // @synthesize childRegenerated=mChildRegenerated;
@property(nonatomic) int caching; // @synthesize caching=mCaching;
- (id).cxx_construct;
@property(readonly, nonatomic) NSUInteger resourceIdentifier;
@property(readonly) struct DataBufferInfo bufferInfo;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

