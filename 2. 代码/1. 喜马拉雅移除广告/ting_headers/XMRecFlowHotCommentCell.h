//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, XMRecFlowHotCommentModel, XMWebImageView;

@interface XMRecFlowHotCommentCell : UITableViewCell
{
    UIView *_bgView;
    XMWebImageView *_bgImageView;
    UIView *_bottomLine;
    XMRecFlowHotCommentModel *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMRecFlowHotCommentModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) XMWebImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

