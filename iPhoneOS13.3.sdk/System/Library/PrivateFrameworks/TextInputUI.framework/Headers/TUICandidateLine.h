//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;

@interface TUICandidateLine : UICollectionReusableView
{
    id <TUICandidateViewStyle> _style;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
// - (void).cxx_destruct;

@end

