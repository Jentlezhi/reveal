//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMWebImageView;

@interface XMLiveRoomPKReportUserView : UIView
{
    UIImageView *_tagIcon;
    XMWebImageView *_avatarView;
    UILabel *_nicknameLabel;
    UILabel *_tagLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) XMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *tagIcon; // @synthesize tagIcon=_tagIcon;
- (void)updateUser:(id)arg1 withIndex:(long long)arg2;
- (void)initBase;
- (id)initWithFrame:(struct CGRect)arg1;

@end

