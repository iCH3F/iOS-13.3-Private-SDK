//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartMeshSharedResource.h>

@class TSCH3DTexCoordGeneration, TSCH3Dvec3DataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource
{
    TSCH3Dvec3DataBuffer *mVertex;
    TSCH3Dvec3DataBuffer *mNormal;
    TSCH3DTexCoordGeneration *mGenerator;
}

@property(retain, nonatomic) TSCH3DTexCoordGeneration *generator; // @synthesize generator=mGenerator;
@property(retain, nonatomic) TSCH3Dvec3DataBuffer *normal; // @synthesize normal=mNormal;
@property(retain, nonatomic) TSCH3Dvec3DataBuffer *vertex; // @synthesize vertex=mVertex;
- (void)flushMemory;
- (id)get;
- (void)setChildRegenerated:(BOOL)arg1;
- (void)setVertex:(id)arg1 normal:(id)arg2 generator:(id)arg3;
- (void)dealloc;

@end

