//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveECommerceProductBaseTableViewCell.h"

@class YXLiveCommonButton, YXLiveGradientButton;
@protocol YXLiveECommerceProductAnchorTableViewCellDelegate;

@interface YXLiveECommerceProductAnchorTableViewCell : YXLiveECommerceProductBaseTableViewCell
{
    id <YXLiveECommerceProductAnchorTableViewCellDelegate> _delegate;
    YXLiveCommonButton *_stickyButton;
    YXLiveGradientButton *_explainButton;
}

@property(retain, nonatomic) YXLiveGradientButton *explainButton; // @synthesize explainButton=_explainButton;
@property(retain, nonatomic) YXLiveCommonButton *stickyButton; // @synthesize stickyButton=_stickyButton;
@property(nonatomic) __weak id <YXLiveECommerceProductAnchorTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)explainButtonClick;
- (void)stickyButtonClick;
- (void)viewUpdateConstraints;
- (void)initView;
- (void)setExplainState:(_Bool)arg1;
- (void)setStickyState:(_Bool)arg1;
- (void)setPresenter:(id)arg1;

@end

