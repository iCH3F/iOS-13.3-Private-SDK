//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsAddMemberCell : CKDetailsCell
{
    UILabel *_addLabel;
    UIImageView *_addIcon;
}

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (Class)cellClass;
@property(retain, nonatomic) UIImageView *addIcon; // @synthesize addIcon=_addIcon;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
// - (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

