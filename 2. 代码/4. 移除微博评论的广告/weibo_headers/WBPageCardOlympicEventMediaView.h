//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UILabel, WBContactAvatarView, WBMediaOperationBtnsView;

@interface WBPageCardOlympicEventMediaView : WBPageCardViewBase
{
    WBMediaOperationBtnsView *_operationBtnView;
    WBContactAvatarView *_avatarView;
    UILabel *_titlaLabel;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UILabel *titlaLabel; // @synthesize titlaLabel=_titlaLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WBMediaOperationBtnsView *operationBtnView; // @synthesize operationBtnView=_operationBtnView;
- (void).cxx_destruct;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)layoutSubviews;
- (void)adClickeStatisticsWithActionCode:(id)arg1 actionEvent:(unsigned long long)arg2;
- (_Bool)clickLocalUserInProfileViewController:(id)arg1;
- (void)didPressScreenNameControl:(id)arg1;
- (void)avatarViewPressed:(id)arg1;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

