//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCEDistributor.h>

#import <iWorkImport/TSTMergeChangeProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTMergeChangeDistributor : TSCEDistributor <TSTMergeChangeProtocol>
{
}

- (id)protocol;
- (void)didUnmergeRange:(struct TSUModelCellRect)arg1;
- (void)didMergeRange:(struct TSUModelCellRect)arg1;

@end

