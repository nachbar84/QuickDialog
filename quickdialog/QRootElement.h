//                                
// Copyright 2011 ESCOZ Inc  - http://escoz.com
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
// file except in compliance with the License. You may obtain a copy of the License at 
// 
// http://www.apache.org/licenses/LICENSE-2.0 
// 
// Unless required by applicable law or agreed to in writing, software distributed under
// the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
// ANY KIND, either express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import "QElement.h"
#import "QSection.h"

@interface QRootElement : QElement {

@protected
	BOOL _grouped;
	
    NSString *_title;
    NSMutableArray *_sections;
    NSString *_controllerName;
}

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSMutableArray *sections;
@property(assign) BOOL grouped;

@property(nonatomic, strong) NSString *controllerName;

- (void)addSection:(QSection *)section;
- (QSection *)getSectionForIndex:(NSInteger)index;
- (NSInteger)numberOfSections;


@end