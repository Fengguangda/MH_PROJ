2018 08/09
	
	app.js:  ע��΢��С�����Ӧ��
			 ����һ��App����������һ������
	app.json:��΢��С����Ӧ�õ�һ��ȫ������
			 ע��С��������ҳ���·��
			 ͨ������������ע�ᣬ�����Ǹ�list
����һ��Helloworld��ҳ��:
	helloworld.wxml����������ҳ����Ҫ����Щ����
		<view>Helloworld</view>
	helloworld.js  ������ע��С�����ҳ�棬����app.js������ͨ��һ�����ú���
		Page
	helloworld.json:ҳ���һЩ���ã�����Ҫ����һ���յ����ö���
	helloworld.wxss:С�������ʽ
	
ͨ��app.json��ע��Helloworld���ҳ���·��

ͨ��helloworld.wxss�н���С�������ʽ����
��wxss�����view��ǩ������ʽ����
view{
	width:
	height:40rpx--->ָ�������ǵ�һ����Ӧʽ��һ����Ļ����
	text-align:center

}

2018 08/10
����ṹ:
.json ��׺�� JSON �����ļ�
.wxml ��׺�� WXML ģ���ļ�
.wxss ��׺�� WXSS ��ʽ�ļ�
.js ��׺�� JS �ű��߼��ļ�

1)JSON����
app.json:�ǵ�ǰС�����ȫ�����ã�������С���������ҳ��·����������֡����糬ʱʱ�䡢�ײ� tab �ȡ�
��:
{
  "pages":[
    "pages/index/index",
    "pages/logs/logs"
  ],
  "window":{
    "backgroundTextStyle":"light",
    "navigationBarBackgroundColor": "#fff",
    "navigationBarTitleText": "WeChat",
    "navigationBarTextStyle":"black"
  }
}
project.config.json:��������,��Ը���ϲ����һЩ���Ի����ã����������ɫ���������õȵ�
page.json:ҳ������,����� page.json ��ʵ������ʾ pages/logs Ŀ¼�µ� logs.json �����С����ҳ����ص����á�

2)WXML ģ��
WXML �䵱�ľ������� HTML �Ľ�ɫ
�������Ҫ��һ�� Hello World ���ַ�����ʾ�ڽ����ϡ�
WXML ����ôд :
<text>{{msg}}</text>
JS ֻ��Ҫ����״̬����:
this.setData({ msg: "Hello World" })
ͨ�� {{ }} ���﷨��һ�������󶨵������ϣ����ǳ�Ϊ���ݰ󶨡�
����ͨ�����ݰ󶨻���������������״̬�ͽ���Ĺ�ϵ������Ҫ if/else, for�ȿ�����������С������ߣ���Щ������������ wx: ��ͷ����������

3��WXSS ��ʽ
WXSS ���� CSS �󲿷ֵ����ԣ�С������ WXSS Ҳ����һЩ������޸ġ�
�����˳ߴ絥λ����д CSS ��ʽʱ����������Ҫ���ǵ��ֻ��豸����Ļ���в�ͬ�Ŀ�Ⱥ��豸���رȣ�����һЩ����������һЩ���ص�λ��
WXSS �ڵײ�֧���µĳߴ絥λ rpx �������߿�����ȥ����ķ��գ�ֻҪ����С����ײ������㼴�ɣ����ڻ�����õĸ��������㣬�������������Ԥ�ڽ����һ���ƫ�
�ṩ��ȫ�ֵ���ʽ�;ֲ���ʽ����ǰ�� app.json, page.json �ĸ�����ͬ��
�����дһ�� app.wxss ��Ϊȫ����ʽ���������ڵ�ǰС���������ҳ�棬�ֲ�ҳ����ʽ page.wxss ���Ե�ǰҳ����Ч��
���� WXSS ��֧�ֲ��� CSS ѡ����

4��JS �����߼�
һ���������ֻ�н���չʾ�ǲ����ģ�����Ҫ���û�����������Ӧ�û��ĵ������ȡ�û���λ�õȵȡ���С������ߣ����Ǿ�ͨ����д JS �ű��ļ��������û��Ĳ�����
<view>{{ msg }}</view>
<button bindtap="clickMe">�����</button>
��� button ��ť��ʱ������ϣ���ѽ����� msg ��ʾ�� "Hello World"��
���������� button ������һ������: bindtap ���� JS �ļ���������� clickMe ��������Ӧ��ε��������
Page({
  clickMe: function() {
    this.setData({ msg: "Hello World" })
  }
})
�����㻹������ JS �е���С�����ṩ�ķḻ�� API��������Щ API ���Ժܷ���ĵ���΢���ṩ�������������ȡ�û���Ϣ�����ش洢��΢��֧���ȡ�
��ǰ�ߵ� QuickStart �����У��� pages/index/index.js �͵����� wx.getUserInfo ��ȡ΢���û���ͷ����ǳƣ����ͨ�� setData �ѻ�ȡ������Ϣ��ʾ�������ϡ�

	