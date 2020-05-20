//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSUUID, NTKFace;

@protocol NTKFaceSnapshotServer <NSObject>
- (void)performAfterCompletingCurrentlyPendingSnapshots:(void (^)(void))arg1;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(NSUUID *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)snapshotFace:(NTKFace *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)requestSnapshotOfFace:(NTKFace *)arg1;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)updateAllSnapshots;
- (void)registerForUpdates;
@end

