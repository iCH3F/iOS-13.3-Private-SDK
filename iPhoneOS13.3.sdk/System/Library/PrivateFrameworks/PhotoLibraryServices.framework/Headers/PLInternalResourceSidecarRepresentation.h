//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLSidecar-Protocol.h>

@class NSDate, NSManagedObjectID, NSNumber, NSString, NSURL, PLInternalResource, PLManagedAsset;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar>
{
    PLInternalResource *_resource;
}

@property(nonatomic) __weak PLInternalResource *resource; // @synthesize resource=_resource;
// - (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *originalFilename;
@property(readonly, retain, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSUInteger compressedSizeValue;
@property(readonly, nonatomic) short indexValue;
@property(readonly, nonatomic) long long ptpTrashedState;
@property(readonly, nonatomic) NSNumber *index;
@property(readonly, nonatomic) PLManagedAsset *asset;
@property(readonly, retain, nonatomic) NSNumber *compressedSize;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, retain, nonatomic) NSDate *modificationDate;
@property(readonly, retain, nonatomic) NSDate *captureDate;
- (id)initWithResource:(id)arg1;
- (id)extension;

@end

