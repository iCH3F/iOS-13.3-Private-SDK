//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, UICollectionView, VUILibraryShelfCollectionViewController, VUIMediaEntity;

@protocol VUILibraryShelfCollectionViewControllerDelegate <NSObject>
- (void)shelfCollectionViewController:(VUILibraryShelfCollectionViewController *)arg1 collectionView:(UICollectionView *)arg2 didSelectMediaEntity:(VUIMediaEntity *)arg3 atIndexPath:(NSIndexPath *)arg4;

@optional
- (void)seeAllButtonPressed:(VUILibraryShelfCollectionViewController *)arg1;
@end

