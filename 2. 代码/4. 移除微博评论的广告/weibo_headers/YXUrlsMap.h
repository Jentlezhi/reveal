//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YXUrlsMap : NSObject
{
    struct map<std::__1::basic_string<char>, SYXMapContent *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SYXMapContent *>>> m_mapID2Url;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getValidEx:(id)arg1;
- (id)getValid:(id)arg1;
- (_Bool)refresh:(id)arg1;
- (id)getUrlIDName:(id)arg1;

@end

